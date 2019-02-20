//	A HyperAccess object provides access to hyperinformation, using particular
//	protocols and data format transformations.

// History:
//	26 Sep 90	Written TBL

#import <Foundation/Foundation.h>
#import "Anchor.h"
#import "HyperText.h"

@interface HyperAccess:NSObject

//	Target variables for interface builder hookups:

{
    id  manager;	// The object which manages different access mechanisms.
    id  openString;
    id	keywords;
    id	titleString;
    id	addressString;
    id	contentSearch;
    
}

//	Interface builder initialisation methods:

- (void)setManager:anObject;
- (void)setOpenString:anObject;
- (void)setKeywords:anObject;
- (void)setTitleString:anObject;
- (void)setAddressString:anObject;
- (void)setContentSearch:anObject;

//	Action methods for buttons etc:

- (IBAction)search:sender;
- (IBAction)searchRTF: sender;
- (IBAction)searchSGML: sender;

- (IBAction)open: sender;
- (IBAction)openRTF:sender;
- (IBAction)openSGML:sender;
- saveNode:(HyperText *)aText;

//	Calls form other code:

- manager;
- (const char *)name;				// Name for this access method
- loadAnchor:(Anchor *)a;			// Loads an anchor.
- loadAnchor:(Anchor *)a Diagnostic:(int)level ;// Loads an anchor.

//	Text delegate methods:

- textDidChange:textObject;
- (BOOL)textWillChange:textObject;

//	HyperText delegate methods:

- hyperTextDidBecomeMain:sender;


@end
