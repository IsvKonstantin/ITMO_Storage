SET impl_path=modules\info.kgeorgiy.java.advanced.implementor\info\kgeorgiy\java\advanced\implementor\
javadoc -private -html4 -d javadoc -link https://docs.oracle.com/en/java/javase/11/docs/api/ -cp src/;artifacts/info.kgeorgiy.java.advanced.implementor.jar;lib/* ru.ifmo.rain.feponov.implementor %impl_path%Impler.java %impl_path%JarImpler.java %impl_path%ImplerException.java