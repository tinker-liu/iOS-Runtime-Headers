/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence> {
    NSMutableDictionary * _inMemoryStore;
    BOOL  _synchronizeWasCalled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NSMutableDictionary *inMemoryStore;
@property (readonly) Class superclass;
@property (readonly) BOOL synchronizeWasCalled;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)inMemoryStore;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setInMemoryStore:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
- (BOOL)synchronizeWasCalled;

@end
