/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "MessageTableViewController.h"
#import "BaseController.h"
#import <office365_exchange_sdk/MSAttachment.h>
#import <office365_exchange_sdk/MSRecipient.h>
#import <office365_exchange_sdk/MSEmailAddress.h>
#import <office365_exchange_sdk/MSMessage.h>

@interface MessageTableViewController ()

@property NSArray *Messages;

@end

@implementation MessageTableViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    
        if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self getMessagesFromInbox];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.Messages.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MessageCell" forIndexPath:indexPath];
    
    MSMessage *message = (MSMessage*)[self.Messages objectAtIndex:indexPath.row];
    
    cell.textLabel.text = [NSString stringWithFormat:@"%@-%@" ,message.Sender.EmailAddress.Name, message.Subject];
    
    return cell;
}

-(void)getMessagesFromInbox{
 
   UIActivityIndicatorView *spinner = [BaseController getSpinner:self.view];
    
   [BaseController getClient:^(MSOutlookClient *client) {
       NSURLSessionTask* task = [[[client getMe] getMessages] execute:^(NSArray<MSMessage> *messages, NSError *error) {
           
           if(error == nil){
               dispatch_async(dispatch_get_main_queue(),
                              ^{
                                  self.Messages = messages;
                                  [self.tableView reloadData];
                                  [spinner stopAnimating];
                              });
           }
       }];
       
       [task resume];
   }];
}

- (IBAction)Refresh:(id)sender{
    [self getMessagesFromInbox];
}

- (IBAction)unwindExchangeViews:(UIStoryboardSegue *)segue{
    
}

@end