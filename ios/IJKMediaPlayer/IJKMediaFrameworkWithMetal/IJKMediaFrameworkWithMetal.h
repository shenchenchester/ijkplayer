/*
 * IJKMediaFrameworkWithMetal.h
 *
 * Created by Chester Shen on 11/9/18.
 * Copyright © 2018 Waylens. All rights reserved.
 *
 * This file is part of ijkPlayer.
 *
 * ijkPlayer is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * ijkPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with ijkPlayer; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#import <UIKit/UIKit.h>

//! Project version number for IJKMediaFrameworkWithMetal.
FOUNDATION_EXPORT double IJKMediaFrameworkWithMetalVersionNumber;

//! Project version string for IJKMediaFrameworkWithMetal.
FOUNDATION_EXPORT const unsigned char IJKMediaFrameworkWithMetalVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <IJKMediaFrameworkWithMetal/PublicHeader.h>
#import <IJKMediaFrameworkWithMetal/IJKMediaPlayback.h>
#import <IJKMediaFrameworkWithMetal/IJKMPMoviePlayerController.h>
#import <IJKMediaFrameworkWithMetal/IJKFFOptions.h>
#import <IJKMediaFrameworkWithMetal/IJKFFMoviePlayerController.h>
#import <IJKMediaFrameworkWithMetal/IJKAVMoviePlayerController.h>
#import <IJKMediaFrameworkWithMetal/IJKMediaModule.h>
#import <IJKMediaFrameworkWithMetal/IJKMediaPlayer.h>
#import <IJKMediaFrameworkWithMetal/IJKNotificationManager.h>
#import <IJKMediaFrameworkWithMetal/IJKKVOController.h>
#import <IJKMediaFrameworkWithMetal/IJKSDLGLViewProtocol.h>

// backward compatible for old names
#define IJKMediaPlaybackIsPreparedToPlayDidChangeNotification IJKMPMediaPlaybackIsPreparedToPlayDidChangeNotification
#define IJKMoviePlayerLoadStateDidChangeNotification IJKMPMoviePlayerLoadStateDidChangeNotification
#define IJKMoviePlayerPlaybackDidFinishNotification IJKMPMoviePlayerPlaybackDidFinishNotification
#define IJKMoviePlayerPlaybackDidFinishReasonUserInfoKey IJKMPMoviePlayerPlaybackDidFinishReasonUserInfoKey
#define IJKMoviePlayerPlaybackStateDidChangeNotification IJKMPMoviePlayerPlaybackStateDidChangeNotification
#define IJKMoviePlayerIsAirPlayVideoActiveDidChangeNotification IJKMPMoviePlayerIsAirPlayVideoActiveDidChangeNotification
#define IJKMoviePlayerVideoDecoderOpenNotification IJKMPMoviePlayerVideoDecoderOpenNotification
#define IJKMoviePlayerFirstVideoFrameRenderedNotification IJKMPMoviePlayerFirstVideoFrameRenderedNotification
#define IJKMoviePlayerFirstAudioFrameRenderedNotification IJKMPMoviePlayerFirstAudioFrameRenderedNotification
#define IJKMoviePlayerFirstAudioFrameDecodedNotification IJKMPMoviePlayerFirstAudioFrameDecodedNotification
#define IJKMoviePlayerFirstVideoFrameDecodedNotification IJKMPMoviePlayerFirstVideoFrameDecodedNotification
#define IJKMoviePlayerOpenInputNotification IJKMPMoviePlayerOpenInputNotification
#define IJKMoviePlayerFindStreamInfoNotification IJKMPMoviePlayerFindStreamInfoNotification
#define IJKMoviePlayerComponentOpenNotification IJKMPMoviePlayerComponentOpenNotification

#define IJKMPMoviePlayerAccurateSeekCompleteNotification IJKMPMoviePlayerAccurateSeekCompleteNotification
#define IJKMoviePlayerSeekAudioStartNotification IJKMPMoviePlayerSeekAudioStartNotification
#define IJKMoviePlayerSeekVideoStartNotification IJKMPMoviePlayerSeekVideoStartNotification

