

#import "vcBase.h"

#import <SMS_SDK/SMSSDKCountryAndAreaCode.h>

@protocol SecondViewControllerDelegate;

@interface SectionsViewController : vcBase
<UITableViewDataSource, UITableViewDelegate,UISearchBarDelegate>
{
    UITableView *table;
    UISearchBar *search;
    NSDictionary *allNames;
    NSMutableDictionary *names;
    NSMutableArray  *keys;    
    
    BOOL    isSearching;
}

@property (nonatomic, strong)  UITableView *table;
@property (nonatomic, strong)  UISearchBar *search;
@property (nonatomic, strong) NSDictionary *allNames;
@property (nonatomic, strong) NSMutableDictionary *names;
@property (nonatomic, strong) NSMutableArray *keys;

@property (nonatomic, strong) id<SecondViewControllerDelegate> delegate;
@property(nonatomic,strong)  UIToolbar* toolBar;

- (void)resetSearch;
- (void)handleSearchForTerm:(NSString *)searchTerm;
-(void)setAreaArray:(NSMutableArray*)array;

@end

@protocol SecondViewControllerDelegate <NSObject>
- (void)setSecondData:(SMSSDKCountryAndAreaCode *)data;
@end


