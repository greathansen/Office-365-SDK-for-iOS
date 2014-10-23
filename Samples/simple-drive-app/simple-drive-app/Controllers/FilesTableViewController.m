/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "FilesTableViewController.h"
#import "BaseController.h"

@interface FilesTableViewController()

@property NSArray *Files;

@end

@implementation FilesTableViewController

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
    [self getFiles];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.Files.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"FileCell" forIndexPath:indexPath];
    
    MSItem *file = (MSItem*)[self.Files objectAtIndex:indexPath.row];
    
    cell.textLabel.text = file.name;
    
    return cell;
}

-(void)getFiles{
    
    UIActivityIndicatorView *spinner = [BaseController getSpinner:self.view];
    
    [BaseController getClient:^(MSSharePointClient * client) {
            [[[client  getfiles] execute:^(NSArray<MSItem> *items, NSError *error) {
                if(error == nil){
                    dispatch_async(dispatch_get_main_queue(),
                                   ^{
                                       self.Files = items;
                                       [self.tableView reloadData];
                                       [spinner stopAnimating];
                                   });
                }
            }] resume];
    }];
}

- (IBAction)unwindExchangeViews:(UIStoryboardSegue *)segue{
}

- (IBAction)Refresh:(id)sender {
    [self getFiles];
}

- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        
        __block UIActivityIndicatorView *spinner = [BaseController getSpinner:self.view];
        
        [BaseController getClient:^(MSSharePointClient *client) {
            
            MSFile* fileToDelete = [self.Files objectAtIndex:indexPath.row];
            [[[[client getfiles] getById:fileToDelete.id] delete:^(id entity, NSError *error) {
                
                dispatch_async(dispatch_get_main_queue(),
                               ^{
                                   
                                   [spinner stopAnimating];
                                   [self getFiles];
                
                                   UIAlertView* alert = [[UIAlertView alloc] initWithTitle:@"Success"
                                                                message:[@"Deleted File " stringByAppendingString:fileToDelete.name]
                                                               delegate:self cancelButtonTitle:@"Ok" otherButtonTitles:nil, nil];
                                   [alert show];
                               });
                
            }] resume];
        }];
    }
}

@end