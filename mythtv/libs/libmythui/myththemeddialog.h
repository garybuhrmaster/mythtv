#ifndef THEMEDDIALOG_H_
#define THEMEDDIALOG_H_
/*
	themeddialog.h

	Copyright (c) 2004 Thor Sigvaldason and Isaac Richards
	Part of the mythTV project
	
*/


#include "mythscreentype.h"

class MythUITree;
class MythUIThemedDialogPrivate;

class MythUIThemedDialog : public MythScreenType
{
    Q_OBJECT

  public:

    MythUIThemedDialog(
                       MythScreenStack *parent, 
                       const QString &screen_name,
                       const QString &theme_file,
                       const QString &theme_dir
                      );

    virtual ~MythUIThemedDialog();

    virtual bool keyPressEvent(QKeyEvent *e);
    
    //
    //  Methods to get pointers to parsed in objects
    //
    
    MythUITree* getMythUITree(const QString &widget_name);


  private:

    MythUIThemedDialogPrivate *d;

};

#endif
