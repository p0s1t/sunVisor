# sunVisor
C++ based algorithm that calculates the amount of sunlight for some given location based on weather and other environmental metrics

This was part of a project that I was keen on because of my interest in alternative engineering and helping
to assuage the effects of climate change. For awhile I even co-owned a business installing solar panels!

The basic idea is to use linear regression and with a machine learning (Weka) library that incorporated a classifier to determine
the largest correlative effect between some environmental variable and the amount of incident solar radiation. I had to convert the 
data into something the Weka libraries could understand because they are generally used in conjunction with Java, but it wasn't
too tough to do as the format is fairly straightforward, sort of similar to XML in a way.

The metrics were all collected at weather stations around Georgia and are in the compressed files in the data folders.

The plotting was done in R and demonstrates a very strong correlation between a variable called 'par' and incident solar radiation.

Par is a measure of the amount of energy produced by chlorophyll. So, the more energy, the more sunlight. Makes sense, right?
