// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Doppler developers
// Copyright (c) 2017 Doppler developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class AddressBookDialog;
}

namespace WalletGui {

class AddressBookDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(AddressBookDialog)

public:
  AddressBookDialog(QWidget* _parent);
  ~AddressBookDialog();

  QString getAddress() const;

private:
  QScopedPointer<Ui::AddressBookDialog> m_ui;
};

}
