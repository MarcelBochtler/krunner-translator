/******************************************************************************
 *  Copyright (C) 2013 – 2016 by David Baum <david.baum@naraesk.eu>           *
 *                                                                            *
 *  This library is free software; you can redistribute it and/or modify      *
 *  it under the terms of the GNU Lesser General Public License as published  *
 *  by the Free Software Foundation; either version 2 of the License or (at   *
 *  your option) any later version.                                           *
 *                                                                            *
 *  This library is distributed in the hope that it will be useful,           *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 *  Library General Public License for more details.                          *
 *                                                                            *
 *  You should have received a copy of the GNU Lesser General Public License  *
 *  along with this library; see the file COPYING.LIB.                        *
 *  If not, see <http://www.gnu.org/licenses/>.                               *
 *****************************************************************************/

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <KRunner/AbstractRunner>

class Translator : public Plasma::AbstractRunner
{
    Q_OBJECT

public:
    Translator(QObject *parent, const QVariantList &args);
    ~Translator();

    void match(Plasma::RunnerContext &);
    void run(const Plasma::RunnerContext &, const Plasma::QueryMatch &);
    void reloadConfiguration();

private:
    bool parseTerm(const QString &, QString &, QPair<QString, QString> &);
    QString m_primary;
    QString m_secondary;
    QString m_yandexKey;
};

K_EXPORT_PLASMA_RUNNER(translator, Translator)

#endif
