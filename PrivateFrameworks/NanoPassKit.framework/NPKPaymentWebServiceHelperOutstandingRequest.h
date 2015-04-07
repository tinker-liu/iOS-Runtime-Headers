/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>, NSString;

@interface NPKPaymentWebServiceHelperOutstandingRequest : NSObject {
    id _completionHandler;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

    NSString *_messageIdentifier;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(copy) id completionHandler;
@property(copy) id errorHandler;
@property(copy) NSString * messageIdentifier;
@property(retain) NSObject<OS_dispatch_source> * timeoutTimer;

- (void).cxx_destruct;
- (id)completionHandler;
- (id)errorHandler;
- (id)messageIdentifier;
- (void)setCompletionHandler:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end