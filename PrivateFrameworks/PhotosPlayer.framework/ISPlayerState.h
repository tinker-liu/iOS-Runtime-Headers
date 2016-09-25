/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerState : NSObject {
    float  _crossfadeAlpha;
    float  _crossfadeBlurRadius;
    NSString * _diagnosticLabel;
    float  _photoBlurRadius;
    float  _scale;
    float  _videoAlpha;
    float  _videoBlurRadius;
}

@property (nonatomic, readonly) float crossfadeAlpha;
@property (nonatomic, readonly) float crossfadeBlurRadius;
@property (nonatomic, readonly) NSString *diagnosticLabel;
@property (nonatomic, readonly) float photoBlurRadius;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) float videoAlpha;
@property (nonatomic, readonly) float videoBlurRadius;

+ (id)outputInfoWithScale:(float)arg1 photoBlurRadius:(float)arg2 videoAlpha:(float)arg3 videoBlurRadius:(float)arg4 crossfadeAlpha:(float)arg5 crossfadeBlurRadius:(float)arg6 label:(id)arg7;

- (void).cxx_destruct;
- (float)crossfadeAlpha;
- (float)crossfadeBlurRadius;
- (id)description;
- (id)diagnosticLabel;
- (id)initWithScale:(float)arg1 photoBlurRadius:(float)arg2 videoAlpha:(float)arg3 videoBlurRadius:(float)arg4 crossfadeAlpha:(float)arg5 crossfadeBlurRadius:(float)arg6 label:(id)arg7;
- (float)photoBlurRadius;
- (float)scale;
- (float)videoAlpha;
- (float)videoBlurRadius;

@end