// > npm i -D <pkg_name>@version
// > npm install --save-dev <pkg_name>@version

// |> Version => 
// 1.0.0  (Exact i.e. No Major/Minor Changes)
// ^1.2.1 (No Major Changes) 
// ~1.1.2 (No Minor Changes)
// <1.1.2 (Any Changes if version is lower)
// >1.1.2 (Any Changes if version is higher)
// *      (Any Changes)

// > npm outdated
// > npm update <pkg_name>
// > npm remove <pkg_name>
// > npm list
// > npm list -a
// > npm list <pkg_name>

// > npx npm-check-updates (Also Updates Package.json)