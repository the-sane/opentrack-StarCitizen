#pragma once

#include "opentrack/options.hpp"
#include "opentrack/main-settings.hpp"
#include "opentrack/mappings.hpp"
#include "ui_trackhat-wizard.h"
#include "ftnoir_tracker_pt/ftnoir_tracker_pt_settings.h"
#include <QObject>
#include <QWizard>

class Wizard : public QWizard
{
    Q_OBJECT

    settings_pt pt;
    main_settings s;
    Ui_wizard ui;
public:
    Wizard();

    enum Model { Cap, ClipRight, ClipLeft };
    enum { ClipRightX = 135, ClipLeftX = -135 };
    enum CameraMode { x640_480_75, x640_480_60, x320_240_189, x320_240_120 };
private slots:
    void set_data();
};
