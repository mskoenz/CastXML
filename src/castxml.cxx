/*
  Copyright Kitware, Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#include "Utils.h"

#include <cxsys/Encoding.hxx>
#include <iostream>

//----------------------------------------------------------------------------
int main(int argc, const char* const * argv)
{
  cxsys::Encoding::CommandLineArguments args =
    cxsys::Encoding::CommandLineArguments::Main(argc, argv);
  argc = args.argc();
  argv = args.argv();
  if(!findResourceDir(argv[0], std::cerr)) {
    return 1;
  }
  (void)argc;
  (void)argv;
  return 0;
}
