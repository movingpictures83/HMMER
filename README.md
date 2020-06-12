# Language: C++
# Input: TXT
# Output: TXT
# Tested with: PluMA 1.0, GCC 4.8.4
PluMA plugin to interface to HMMER (Finn et al, 2011).

The plugin searches for marker genes in a file of sequence fragments.
Both of these should be specified in an input TXT file
of tab-delimited keyword/value pairs:

markers: List of marker genes (HMM)
fragments: Sequence fragments (FASTA)

The plugin will output the list of discovered marker genes
in an output TXT file.
