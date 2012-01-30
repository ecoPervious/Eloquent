//
//  RightSideBarViewController.h
//  Eloquent
//
//  Created by Manfred Bergmann on 18.12.08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <SideBarViewController.h>
#import <HostableViewController.h>
#import <ProtocolHelper.h>

#define RIGHTSIDEBARVIEW_NIBNAME   @"RightSideBarView"


@interface RightSideBarViewController : SideBarViewController {
    IBOutlet NSBox *placeholderView;
}

// initialitazion
- (id)initWithDelegate:(id)aDelegate;

- (void)setContentView:(NSView *)aView;
- (NSView *)contentView;

@end
