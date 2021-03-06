/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPService : NSObject {
    HAPAccessory * _accessory;
    NSArray * _characteristics;
    NSNumber * _instanceID;
    NSArray * _linkedServices;
    unsigned int  _serviceProperties;
    NSString * _type;
}

@property (nonatomic) HAPAccessory *accessory;
@property (setter=setCBService:, nonatomic, retain) CBService *cbService;
@property (nonatomic, retain) NSArray *characteristics;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, readonly) NSArray *linkedServices;
@property (nonatomic, readonly) unsigned int serviceProperties;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (BOOL)_updateAndValidateCharacteristics;
- (BOOL)_updateCharacteristic:(id)arg1;
- (BOOL)_validateMandatoryCharacteristics;
- (BOOL)_validateServiceCharacteristics;
- (id)accessory;
- (id)cbService;
- (id)characteristics;
- (id)characteristicsOfType:(id)arg1;
- (id)description;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned int)arg4 linkedServices:(id)arg5;
- (id)instanceID;
- (BOOL)isEqualToService:(id)arg1;
- (id)linkedServices;
- (id)propertiesDescription;
- (unsigned int)serviceProperties;
- (void)setAccessory:(id)arg1;
- (void)setCBService:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
