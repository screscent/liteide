/**************************************************************************
** This file is part of LiteIDE
**
** Copyright (c) 2011-2012 LiteIDE Team. All rights reserved.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** In addition, as a special exception,  that plugins developed for LiteIDE,
** are allowed to remain closed sourced and can be distributed under any license .
** These rights are included in the file LGPL_EXCEPTION.txt in this package.
**
**************************************************************************/
// Module: welcomeplugin.h
// Creator: visualfc <visualfc@gmail.com>

#ifndef WELCOMEPLUGIN_H
#define WELCOMEPLUGIN_H

#include "welcome_global.h"
#include "liteapi/liteapi.h"
#include "welcomebrowser.h"
#include "litedoc.h"
#include <QtPlugin>

class WelcomePlugin : public LiteApi::IPlugin
{
    Q_OBJECT
public:
    WelcomePlugin();
    virtual bool initWithApp(LiteApi::IApplication *app);
protected slots:
    void home();
protected:
    WelcomeBrowser *m_welcome;
    LiteDoc *m_liteDoc;
    QAction *m_welcomeAct;
    QAction *m_homeAct;
};

class PluginFactory : public LiteApi::PluginFactoryT<WelcomePlugin>
{
    Q_OBJECT
    Q_INTERFACES(LiteApi::IPluginFactory)
};

#endif // WELCOMEPLUGIN_H
