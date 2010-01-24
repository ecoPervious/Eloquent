//
//  SwordKey.m
//  MacSword2
//
//  Created by Manfred Bergmann on 17.12.09.
//  Copyright 2009 Software by MABE. All rights reserved.
//

#import "SwordKey.h"


@implementation SwordKey

+ (id)swordKey {
    return [[[SwordKey alloc] init] autorelease];
}

+ (id)swordKeyWithRef:(NSString *)aRef {
    return [[[SwordKey alloc] initWithRef:aRef] autorelease];
}

- (id)init {
    return [self initWithRef:nil];
}

- (id)initWithSWKey:(sword::SWKey *)aSk {
    self = [super init];
    if(self) {
        sk = aSk;
        created = NO;
    }
    
    return self;
}

- (id)initWithRef:(NSString *)aRef {
    self = [super init];
    if(self) {
        sk = new sword::SWKey();
        created = YES;
        
        if(aRef) {
            [self setKeyText:aRef];
        }
    }
    
    return self;    
}

- (void)finalize {
    if(created) {
        delete sk;
    }
    
    [super finalize];
}

- (void)dealloc {
    if(created) {
        delete sk;
    }
    
    [super dealloc];    
}

#pragma mark - Methods

- (void)setPosition:(int)aPosition {
    sk->setPosition(sword::SW_POSITION((char)aPosition));
}

- (void)decrement {
    sk->decrement();
}

- (void)increment {
    sk->increment();
}

- (NSString *)keyText {
    return [NSString stringWithUTF8String:sk->getText()];
}

- (void)setKeyText:(NSString *)aKey {
    sk->setText([aKey UTF8String]);
}

- (sword::SWKey *)swKey {
    return sk;
}

@end