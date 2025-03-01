#pragma once

#include <elf_gnu_structure.h>
#include <filesystem/echfs.h> // to do add a global file system
#include <utils/sys/programm_exec_info.h>
uint64_t launch_programm(const char *path, file_system *file_sys, int argc, const char **argv);
size_t launch_programm_usr(programm_exec_info *info);

uint64_t launch_module(const char *path, file_system *file_sys, int argc, const char **argv);
