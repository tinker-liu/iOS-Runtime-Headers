/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRLearningSessionClient : CoreIRLearningSession {
    CoreRCManagerClient * _manager;
}

@property (nonatomic) CoreRCManagerClient *manager;

- (void)endLearning;
- (id)manager;
- (void)setManager:(id)arg1;
- (BOOL)startLearningCommand:(unsigned int)arg1;

@end
