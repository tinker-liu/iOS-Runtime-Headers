/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationPriorityList : NSObject {
    NSMutableOrderedSet * _requests;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, retain) NSMutableOrderedSet *requests;

- (void).cxx_destruct;
- (id)_clearRequestsWithPersistence:(unsigned int)arg1;
- (id)_identifierForNotificationRequest:(id)arg1;
- (unsigned int)_indexOfRequestMatchingNotificationRequest:(id)arg1;
- (unsigned int)_insertionIndexForNotificationRequest:(id)arg1;
- (id)clearAllRequests;
- (id)clearNonPersistentRequests;
- (BOOL)containsNotificationRequestMatchingRequest:(id)arg1;
- (unsigned int)count;
- (unsigned int)indexOfNotificationRequestMatchingRequest:(id)arg1;
- (id)init;
- (unsigned int)insertNotificationRequest:(id)arg1;
- (unsigned int)insertionIndexForNotificationRequest:(id)arg1;
- (unsigned int)modifyNotificationRequest:(id)arg1;
- (unsigned int)removeNotificationRequest:(id)arg1;
- (id)requestAtIndex:(unsigned int)arg1;
- (id)requests;
- (void)setRequests:(id)arg1;

@end