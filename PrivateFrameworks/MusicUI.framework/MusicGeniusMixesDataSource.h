/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicGeniusMixesDataSource : MusicQueryDataSource {
    NSMutableArray *_mixes;
}

- (void).cxx_destruct;
- (void)_invalidateCalculatedEntities;
- (BOOL)_updateQueryPredicatesAndOrdering;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (id)entities;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfEntity:(id)arg1;
- (BOOL)isEmpty;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)showsIndexBar;

@end
