/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDAsset : NSManagedObject {
    unsigned int  _scaleFactor;
}

@property (nonatomic, readonly) NSString *baseName;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) TDThemeBitSource *source;
@property (nonatomic, retain) TDTemplateRenderingMode *templateRenderingMode;

+ (id)_filenameRegex;
+ (int)idiomFromImageFilename:(id)arg1;
+ (BOOL)isTemplateFromImageFilename:(id)arg1;
+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;
+ (int)subtypeFromImageFilename:(id)arg1;

- (id)_sourceRelativePathComponents;
- (id)baseName;
- (id)fileURLWithDocument:(id)arg1;
- (BOOL)hasProduction;
- (unsigned int)scaleFactor;
- (void)setHasProduction:(id)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (id)sourceRelativePath;

@end
