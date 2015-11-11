# Download the package
#git clone https://github.com/vimartin/MergedAnalysis.git
#cd MergedAnalysis

# compile fastjet
# note $(WORKDIR) is the current working area
export WORKDIR=$PWD

curl -O http://fastjet.fr/repo/fastjet-3.1.3.tar.gz
tar -xvzf fastjet-3.1.3.tar.gz
rm -rf fastjet/*
cd fastjet-3.1.3
./configure --prefix=${WORKDIR}/fastjet/
make
make install
cd ${WORKDIR}

curl -O http://fastjet.hepforge.org/contrib/downloads/fjcontrib-1.021.tar.gz
tar -xvzf fjcontrib-1.021.tar.gz
cd fjcontrib-1.021
./configure --fastjet-config=${WORKDIR}/fastjet/bin/fastjet-config
make
make install
cd ${WORKDIR}

# Prepare and install the code
cd $WORKDIR
mkdir -p output/
mkdir -p data/
scp -r lxplus.cern.ch:/afs/cern.ch/work/m/mkhader/public/output_clusters_vertices_tracks*.root data/.

make clean
make all
