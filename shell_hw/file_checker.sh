#! /bin/bash 

#input
directory=$1

# Required functions 
is_directory (){
    if [ ! -d $1 ]; then
    echo "ERROR: Not a directory: <$1>"
    return 1
    fi
}
return_file_type(){ 
    if [ -x "${file}" ]; then   
        echo "File $(basename ${file})  is executable "
        return
    fi
    if (test -h "${file}"); then
        echo "File $(basename ${file}) is softlink"
    fi

}

# Main execution
    if [ "$#" -gt 1 ]; then
        echo "Illegal number of parameters"
        exit 1
    fi   

    is_directory $directory

    if [ "$#" -eq 0 ]; then
        directory=`pwd`
    fi
    for file in /$directory/* ;do 
        return_file_type $file
    done