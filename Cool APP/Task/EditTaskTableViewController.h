//
//  EditTaskTableViewController.h
//  Task
//
//  Created by Team 4 on 10/13/15.
//  Copyright © 2015 Group 4. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>

@interface EditTaskTableViewController : UITableViewController <UITextFieldDelegate, MFMailComposeViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>{
    BOOL checked;
}

@property (weak, nonatomic) IBOutlet UITextField *editTaskTitleField;
@property (weak, nonatomic) IBOutlet UITextView *editTaskDescTextView;
@property (weak, nonatomic) IBOutlet UITextField *editTaskDueField;
@property (weak, nonatomic) IBOutlet UIButton *completeButton;
@property (weak, nonatomic) IBOutlet UISlider *repeatingSlider;
@property (weak, nonatomic) IBOutlet UILabel *repeatingSliderLabel;
@property (weak, nonatomic) IBOutlet UISwitch *repeatingSwitch;
@property (weak, nonatomic) IBOutlet UISegmentedControl *repeatingUnit;
@property (weak, nonatomic) IBOutlet UILabel *notesCounter;
@property (weak, nonatomic) IBOutlet UILabel *photosCounter;

@property PFObject *task;
@property NSString *taskListId;

@end
