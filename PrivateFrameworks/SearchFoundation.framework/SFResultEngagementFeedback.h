/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying> {
    BOOL  _actionEngaged;
    unsigned int  _actionTarget;
    unsigned int  _destination;
    unsigned int  _triggerEvent;
}

@property (nonatomic, readonly) BOOL actionEngaged;
@property (nonatomic) unsigned int actionTarget;
@property (nonatomic) unsigned int destination;
@property (nonatomic) unsigned int triggerEvent;

+ (BOOL)supportsSecureCoding;

- (BOOL)actionEngaged;
- (unsigned int)actionTarget;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 actionEngaged:(BOOL)arg2 triggerEvent:(unsigned int)arg3 destination:(unsigned int)arg4;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned int)arg2 destination:(unsigned int)arg3;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned int)arg2 destination:(unsigned int)arg3 actionTarget:(unsigned int)arg4;
- (void)setActionTarget:(unsigned int)arg1;
- (void)setDestination:(unsigned int)arg1;
- (void)setTriggerEvent:(unsigned int)arg1;
- (unsigned int)triggerEvent;

@end
