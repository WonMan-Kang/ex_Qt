#pragma once

#include "stdafx.h"

class QEventFilter : public QObject
{
    Q_OBJECT

public:
    explicit QEventFilter(QObject *parent = nullptr);
    ~QEventFilter();

private:
	bool eventFilter(QObject *obj, QEvent *e);

};

