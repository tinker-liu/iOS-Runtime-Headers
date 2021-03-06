/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAttributionLabel : UIView {
    _MKUILabel * _innerLabel;
    unsigned int  _mapType;
    _MKUILabel * _strokeLabel;
    BOOL  _useDarkText;
}

@property (nonatomic) unsigned int mapType;

- (void).cxx_destruct;
- (id)_attributesWithStroke:(BOOL)arg1;
- (void)_prepareLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)mapType;
- (void)setMapType:(unsigned int)arg1;
- (void)sizeToFit;

@end
