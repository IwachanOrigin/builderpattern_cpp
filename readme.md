# builderpattern cpp demo code

## Overview

    Builder Patternの使い方

## 使いどころ

    Builder パターンは、動的に生成したいオブジェクトの生成クラスを用意し、利用するパターンです。  
    例では、HomeBuildInterfaceを継承した2種類のクラスをDirectorクラスに渡しています。  
    Directorクラスは受け取ったクラスが実装しているであろう純粋仮想関数となっているsetStructureを呼び出すことで  
    それぞれが持つ特性に沿った情報をセットさせています。  
    実際に中身を確認する場合は、これもまた純粋仮想関数となっているgetResultで取得可能なBuildHomeクラスの  
    ポインタを受け取り、必要な情報を出力しています。  
    応用例としては、生成クラス側でファイルの拡張子を見て動的に生成するクラスを変えるといったことが出来ます。  
    正直、「Factoryパターン」と何が違うのか？と思ってしまいます。  
    同じことを考える方は居て、Stack Overflowなどで質問されている方も多くいらっしゃいました。  
    曰く、「Factoryパターン」はコンストラクターの単純なラッパーであり、基本的に生成したオブジェクトをそのまま  
    返却するだけです。  
    「Builderパターン」は生成クラスにパラメータをセットした後で、最終成果物としてオブジェクトを生成します。  
    極論、コンストラクタへ渡す引数が多くなる場合、Builderパターンを用いることで引数をセッターでセットできるので  
    コードが読みやすくなるということになるのかもしれません。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/builderpattern_cpp/blob/master/LICENSE)

