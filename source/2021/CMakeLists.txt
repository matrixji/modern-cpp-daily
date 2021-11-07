file(GLOB FOLDERS w[0-9][0-9])

foreach(FOLDER ${FOLDERS})
    add_subdirectory(${FOLDER})
endforeach(FOLDER ${FOLDERS})