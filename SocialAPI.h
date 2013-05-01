//
//  SocialAPI.h
//  SocialAPI
//
//  Created by Clayton R. Selby on 12/14/12.
//  Copyright (c) 2012 SocialREST. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Person.h"
#import "Profile.h"


/**
 The SocialAPI class ...
 */
@interface SocialAPI : NSObject

/** Opens the Login dialog on the device in a web view */
+ (void)authenticateFB: (NSString* )scope;
/** 
 Calls FB to retrieve the current user's profile
 @return A Profile object 
 */
+ (Profile *)getProfile;
/** 
 Calls FB to retrieve the current user's friends list
 @return An array of Person objects 
 */
+ (NSArray *)getFriends;

/**
 Getter method to retrieve a static token
 @return Token; if no token exists, nil is returned.
 */
+ (NSString*)token;
/**
 Getter method to retrive a static token
 @return A unique ID; if no ID exists, nil is returned.
 */
+ (NSString *)uniqueID;
/**
 Call FB to get users likes
 @return An array of likes, if no likes exists, nil is returned.
 */
+ (NSArray *)getLikes;
/**
 Call FB to get users feed
 @return An array of the elements in the users feed, if none exists, nil is returned.
 */
+ (NSArray *)getFeed;

/**
 Post to users wall
 @return nil if unsuccesful or the id of the post if successful
 */
+ (NSString *)postToWall:(NSString*) message;

/**
 Like an object
 @return nil if unsuccesful or the id of the like
 */
+ (BOOL)likeObject:(NSString*) objectId;

/**
 Send a Custom GET to Facebook
 @return nil if unsuccesful or the JSON payload
 */
+ (NSString*)sendCustomGet:(NSString *) customGet;
 

// Are these meant as public class methods?
+ (BOOL)isTokenValid;
+ (BOOL)saveToken:(NSString *)token;

+ (BOOL) saveFBToken:(NSURL *)url;

@end


