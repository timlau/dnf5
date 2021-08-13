/*
Copyright Contributors to the libdnf project.

This file is part of libdnf: https://github.com/rpm-software-management/libdnf/

Libdnf is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

Libdnf is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with libdnf.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef DNFDAEMON_CLIENT_COMMANDS_REINSTALL_REINSTALL_HPP
#define DNFDAEMON_CLIENT_COMMANDS_REINSTALL_REINSTALL_HPP

#include "../command.hpp"

#include <libdnf/conf/option.hpp>
#include <libdnf/conf/option_bool.hpp>

namespace dnfdaemon::client {

class CmdReinstall : public TransactionCommand {
public:
    void set_argument_parser(Context & ctx) override;
    void run(Context & ctx) override;

private:
    std::vector<std::unique_ptr<libdnf::Option>> * patterns_options{nullptr};
};

}  // namespace dnfdaemon::client

#endif  // DNFDAEMON_CLIENT_COMMANDS_REINSTALL_REINSTALL_HPP
