[@react.component]
let make = _ => {
  let url = ReasonReactRouter.useUrl();
  let atom = {js|ReasonReact makes ⚛️ UI |js};
  <div> {React.string(atom)} </div>;
};