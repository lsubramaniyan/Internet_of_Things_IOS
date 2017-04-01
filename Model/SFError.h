//
//  SFError.h
//  Smart Parking
//
//  Created by Ramesh on 29/03/17.
//  Copyright © 2017 Aspire Syatems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFError : NSObject

@property ( nonatomic, strong ) NSString *errorMessage;
@property ( nonatomic, assign ) NSInteger errorCode;

@end
