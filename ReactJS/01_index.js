function Navbarr(){
    return (
        <h2>Nav</h2>
    )
}

function MainComponent(){
    return (
        <p>MainComponent</p>
    )
}

ReactDOM.render(
    <div>
        <Navbarr />
        <MainComponent />
    </div>,
    document.getElementById("root")
)

// ReactDOM.render(
//     <div>
//         <MainComponent />
//     </div>,
//     document.getElementById("root2")
// )