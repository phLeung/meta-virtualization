# github.com/containerd/stargz-snapshotter/estargz v0.14.3
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 6ee6fa1a88df6ea098f6b7dddde29e33f09d5331 
SRCREV_estargz="6ee6fa1a88df6ea098f6b7dddde29e33f09d5331"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=estargz;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/stargz-snapshotter/estargz//estargz"

# github.com/k3s-io/stargz-snapshotter v0.13.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/stargz-snapshotter a756490d248070c81d8178dda7edc57d44d210e5 
SRCREV_stargz-snapshotter="a756490d248070c81d8178dda7edc57d44d210e5"
SRC_URI += "git://github.com/k3s-io/stargz-snapshotter;name=stargz-snapshotter;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/stargz-snapshotter"

