//
//  BibleViewController+TextDisplayGeneration.h
//  MacSword2
//
//  Created by Manfred Bergmann on 19.02.10.
//  Copyright 2010 Software by MABE. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <BibleViewController.h>


@interface BibleViewController (TextDisplayGeneration)

- (NSAttributedString *)displayableHTMLForReferenceLookup;
- (NSString *)createHTMLStringWithMarkers;
- (void)applyBookmarkHighlightingOnTextEntry:(SwordModuleTextEntry *)anEntry;
- (void)appendHTMLFromTextEntry:(SwordModuleTextEntry *)anEntry atHTMLString:(NSMutableString *)aString;
- (NSMutableAttributedString *)convertToAttributedStringFromString:(NSString *)aString;
- (void)applyLinkCursorToLinksInAttributedString:(NSMutableAttributedString *)anString;
- (void)replaceVerseMarkersInAttributedString:(NSMutableAttributedString *)aAttrString;
- (void)applyWritingDirectionOnText:(NSMutableAttributedString *)anAttrString;

@end