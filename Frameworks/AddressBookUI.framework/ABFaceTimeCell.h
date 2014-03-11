/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPropertyCellDelegate>, ABTransportButton, NSDictionary, UILabel;

@interface ABFaceTimeCell : ABContactCell {
    <ABPropertyCellDelegate> *_delegate;
    BOOL _displayConstraintsActive;
    UILabel *_faceTimeLabel;
    BOOL _isFaceTimeAudioAvailable;
    NSDictionary *_labelTextAttributes;
    ABTransportButton *_transportIcon1;
    ABTransportButton *_transportIcon2;
}

@property <ABPropertyCellDelegate> * delegate;
@property BOOL displayConstraintsActive;
@property(retain) UILabel * faceTimeLabel;
@property BOOL isFaceTimeAudioAvailable;
@property(copy) NSDictionary * labelTextAttributes;
@property(readonly) ABTransportButton * transportIcon1;
@property(readonly) ABTransportButton * transportIcon2;

+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)delegate;
- (BOOL)displayConstraintsActive;
- (id)faceTimeLabel;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isFaceTimeAudioAvailable;
- (id)labelTextAttributes;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (void)setDisplayConstraintsActive:(BOOL)arg1;
- (void)setFaceTimeLabel:(id)arg1;
- (void)setIsFaceTimeAudioAvailable:(BOOL)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setNeedsUpdateDisplayConstraints;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon1;
- (id)transportIcon2;
- (void)updateConstraints;

@end