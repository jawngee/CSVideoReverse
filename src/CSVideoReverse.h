//
//  CSVideoReverse.h
//
//  Created by Chris Sung on 3/5/17.
//  Copyright © 2017 chrissung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


/**
 CSVideoReverse delegate
 */
@protocol CSVideoReverseDelegate <NSObject>

@optional

/**
 Called when the video has finished being reversed

 @param success YES if successful, NO if not
 @param error If not successful, the NSError encapsulating the problem
 */
- (void)didFinishReverse:(bool)success withError:(NSError *)error;

@end


/**
 Utility class for reversing videos
 */
@interface CSVideoReverse : NSObject

@property (weak, nonatomic) id<CSVideoReverseDelegate> delegate;    /**< Delegate */
@property (readwrite, nonatomic) BOOL showDebug;                    /**< Show debug output messages when reversing */
@property (strong, nonatomic) NSDictionary* readerOutputSettings;   /**< Output settings for reversed video */

/**
 Reverses the video at a given path

 @param inputPath The path of the input video
 @param outputPath The path for the reversed output video
 */
- (void)reverseVideoAtPath:(NSString *)inputPath outputPath:(NSString *)outputPath;

@end

