// Copyright (C) 2014 Rob Caelers <robc@krandor.org>
// All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef DOCK_HH
#define DOCK_HH

#include <memory>

#include "core/CoreTypes.hh"
#include "utils/Signals.hh"
#include "ui/IApplication.hh"

class DockPrivate;

class MacOSDock : public workrave::utils::Trackable
{
public:
  explicit MacOSDock(std::shared_ptr<IApplication> app);

private:
  void on_operation_mode_changed(workrave::OperationMode m);

private:
  std::shared_ptr<IApplication> app;
  std::shared_ptr<DockPrivate> priv;
};

#endif // DOCK_HH
