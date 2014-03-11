/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUIShowcasePageComponent : SKUIPageComponent {
    int _missingItemCount;
    NSArray *_showcaseItems;
}

@property(readonly) NSArray * showcaseItems;

- (void).cxx_destruct;
- (void)_updateWithMissingItems:(id)arg1;
- (int)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (id)showcaseItems;

@end