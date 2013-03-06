//
//  PPSPreferences.h
//  Here and There
//
//  Created by Metral, Max on 2/26/13.
//  Copyright (c) 2013 PayPal Partner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PPSPreferences : NSObject
+(NSString*)currentUsername;
+(void)setCurrentUsername: (NSString*) username;

+(NSString*)currentTicket;
+(void)setCurrentTicket: (NSString*) ticket;

+(NSString*)currentLocationName;
+(void)setCurrentLocationName: (NSString*) internalName;

+(void)setMerchantFromServerResponse: (NSDictionary*) dictionary;

#ifdef DEBUG
+(NSString*)savedPasswordInDebug;
+(void)setSavedPasswordInDebug: (NSString*) password;
#endif
@end
