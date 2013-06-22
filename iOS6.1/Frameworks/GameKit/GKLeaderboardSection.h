/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInterleavedListTableSection.h>

@class GKDecoratedLabel, GKGame, GKPlayer, GKSparseLeaderboard, GKThreadsafeDictionary, NSArray, NSIndexPath, NSObject<GKLeaderboardDelegate>, NSString;

@interface GKLeaderboardSection : GKInterleavedListTableSection
{
    NSString *_title;
    GKGame *_game;
    GKPlayer *_player;
    NSString *_categoryID;
    NSArray *_searchPlayers;
    int _timeScope;
    int _playerScope;
    BOOL _usesUppercaseTitles;
    NSArray *_leaderboards;
    GKSparseLeaderboard *_friendLeaderboard;
    GKSparseLeaderboard *_globalLeaderboard;
    NSObject<GKLeaderboardDelegate> *_leaderboardDelegate;
    GKDecoratedLabel *_statusView;
    NSIndexPath *_previouslySelectedIndexPath;
    GKThreadsafeDictionary *_playerDictionary;
}

@property(retain, nonatomic) GKThreadsafeDictionary *playerDictionary; // @synthesize playerDictionary=_playerDictionary;
@property(retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // @synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath;
@property(retain, nonatomic) GKDecoratedLabel *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) NSObject<GKLeaderboardDelegate> *leaderboardDelegate; // @synthesize leaderboardDelegate=_leaderboardDelegate;
@property(retain, nonatomic) GKSparseLeaderboard *globalLeaderboard; // @synthesize globalLeaderboard=_globalLeaderboard;
@property(retain, nonatomic) GKSparseLeaderboard *friendLeaderboard; // @synthesize friendLeaderboard=_friendLeaderboard;
@property(retain, nonatomic) NSArray *leaderboards; // @synthesize leaderboards=_leaderboards;
@property(nonatomic) BOOL usesUppercaseTitles; // @synthesize usesUppercaseTitles=_usesUppercaseTitles;
@property(nonatomic) int playerScope; // @synthesize playerScope=_playerScope;
@property(nonatomic) int timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)_showDisclosureChevronForPlayer:(id)arg1;
- (BOOL)canSelectPlayer:(id)arg1;
- (void)tableView:(id)arg1 showMoreInSection:(int)arg2;
- (id)tableView:(id)arg1 indexPathsForLeaderboardRange:(struct _NSRange)arg2 inSection:(unsigned int)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 baseHeightForScoreRowAtIndexPath:(id)arg2;
- (BOOL)showPortraitForScoreAtRow:(int)arg1;
- (void)forwardHandlePressGesture:(id)arg1 forTableView:(id)arg2;
- (id)viewForSectionHeaderInTableView:(id)arg1;
- (int)_defaultPlayerScopeForColumnIndex:(int)arg1;
- (id)tableView:(id)arg1 headerCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 statusCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (void)updateStatusViewInTableView:(id)arg1;
- (id)tableView:(id)arg1 scoreCellWithIdentifiers:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3 column:(int)arg4;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (void)tableView:(id)arg1 refreshCellAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 loadAdditionalDataForSection:(int)arg2 rows:(id)arg3 thenUpdateView:(id)arg4;
- (id)iconURLStringForItem:(id)arg1;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (id)tableView:(id)arg1 reuseIdentifiersForRow:(int)arg2;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2 column:(int)arg3;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (id)leaderboardForCategoryID:(id)arg1 timeScope:(int)arg2 playerScope:(int)arg3;
- (void)loadLeaderboards:(id)arg1 complete:(id)arg2;
- (Class)leaderboardCellContentsClass;
- (Class)leaderboardCellClass;
- (Class)leaderboardClass;
- (void)filterWithSearchText:(id)arg1;
- (id)titleForHeaderInTableView:(id)arg1;
- (id)tableView:(id)arg1 headerTextForLeaderboardWithPlayerScope:(int)arg2 andScoreCount:(int)arg3 uppercase:(BOOL)arg4;
- (id)tableView:(id)arg1 headerTextForLeaderboard:(id)arg2 uppercase:(BOOL)arg3;
- (float)heightForHeaderInTableView:(id)arg1;
- (void)cachePlayer:(id)arg1 inDictionary:(id)arg2;
- (id)playerForScore:(id)arg1;
- (id)playerForPlayerID:(id)arg1;
- (BOOL)tableView:(id)arg1 row:(int *)arg2 column:(int *)arg3 forItem:(id)arg4;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2 column:(int)arg3;
- (int)tableView:(id)arg1 itemIndexForIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 isShowMoreRow:(int)arg2;
- (BOOL)tableView:(id)arg1 isShowcasedScoreRow:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (int)footerRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)headerRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)contentRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionShowcasedScoreCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionScoreCountInTableView:(id)arg1 column:(int)arg2;
- (int)numberOfContentColumnsInTableView:(id)arg1;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)searchableLeaderboard;
- (void)prepareLeaderboards;
- (void)purgeCachedData;
- (id)initWithGame:(id)arg1;
- (id)init;
- (void)dealloc;

@end
