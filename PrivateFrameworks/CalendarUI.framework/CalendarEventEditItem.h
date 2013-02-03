/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@interface CalendarEventEditItem : NSObject {
    id _delegate;
}

- (void)absorbValueFromOccurrence:(struct CalEventOccurrence { }*)arg1 givenModel:(id)arg2 editModel:(id)arg3;
- (void)absorbValueFromView:(id)arg1 intoEditModel:(id)arg2;
- (BOOL)canDetachSingleOccurrence;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (BOOL)cellShowsDisclosureForSubitemAtIndex:(NSInteger)arg1;
- (BOOL)configureForCalendarConstraints:(void*)arg1 withOccurrence:(struct CalEventOccurrence { }*)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (BOOL)editItemViewDirty:(id)arg1;
- (BOOL)hasChangeableRowHeights;
- (id)identifier;
- (NSInteger)numberOfSubitems;
- (BOOL)requiresDetachmentForView:(id)arg1;
- (void)saveIntoEvent:(void*)arg1;
- (id)serializedValue;
- (void)setDelegate:(id)arg1;
- (void)setupShorterValueForCell:(id)arg1 atIndex:(NSInteger)arg2;
- (BOOL)shouldCancelEditingForModel:(id)arg1;

@end