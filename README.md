# VSC_Test
To test error in camke configuration received by VSC and share the same with MS development team

CMake Version: 3.10.2

CMake Tool: 1.4.1

Test Steps:
1. No error on includes when no config is added, prior to creation of .vscode folder. -- First Commit
2. No error on includes post creation of .vscode setting files with defaults {c_cpp_properties.json, launch.json, tasks,json}. -- Second Commit
3. No errors on configuring as suggested to recreate the issue, limiting my configuration properties to: -- Third Commit

        {
            "name": "Linux",
            "configurationProvider": "ms-vscode.cmake-tools"
        }
