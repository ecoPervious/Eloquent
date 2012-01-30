//
//  DictionaryViewController.h
//  Eloquent
//
//  Created by Manfred Bergmann on 25.08.08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CocoPCRE/CocoPCRE.h>
#import <HostableViewController.h>
#import <ModuleViewController.h>
#import <ProtocolHelper.h>

@class SwordDictionary, ExtTextViewController;

#define DICTIONARYVIEW_NIBNAME   @"DictionaryView"

/** the view of this view controller is a ScrollSynchronizableView */
@interface DictionaryViewController : ModuleViewController <NSCoding> {
    IBOutlet NSPopUpButton *modulePopBtn;
    IBOutlet NSTableView *entriesTableView;
    
    NSMutableArray *selection;
    NSArray *dictKeys;
}

// ---------- initializers ---------
- (id)initWithModule:(SwordDictionary *)aModule;
- (id)initWithModule:(SwordDictionary *)aModule delegate:(id)aDelegate;
- (id)initWithDelegate:(id)aDelegate;

// ---------- methods --------------
// selector called by menuitems
- (void)moduleSelectionChanged:(id)sender;

// NSCoding
- (id)initWithCoder:(NSCoder *)decoder;
- (void)encodeWithCoder:(NSCoder *)encoder;

// actions
- (IBAction)moduleSelectionChanged:(id)sender;

@end
