#
# This spec file is read by gcj when linking.
# It is used to specify the standard libraries we need in order
# to link with libgcj.
#
%rename startfile startfileorig
*startfile: crtmt%O%s %(startfileorig)

%rename lib liborig
*lib: %{static-libgcj:-non_shared} %{s-bc-abi:} -lgcj %{static-libgcj:-call_shared} -lm     -lgdi32 -lws2_32  %(libgcc)  %(liborig)

*jc1: -fhash-synchronization -fuse-divide-subroutine -fcheck-references -fuse-boehm-gc    -fkeep-inline-functions
