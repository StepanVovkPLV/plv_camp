#! /bin/bash 

#input
directory=$1

# Required functions 
is_directory (){
    if [ ! -d $1 ]; then
    echo " INPUT $1"
    echo "ERROR: Not a directory: <$1>"
    return 1
    fi
}
return_file_type(){ 
    
    if [ -x "${file}" ]; then   
        if ! [ -h "${file}" ]; then
        echo "File $(basename ${file}) is executable "
        
        else
        echo "File $(basename ${file})  is softlink "
        fi
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
        if [ ! -d "${file}" ]; then
            return_file_type $file
        fi
    done