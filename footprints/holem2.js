// MountingHole_2.2mm_M2_Pad_Via
// TODO add more sizes as param?
module.exports = {
    nets: {
        net: undefined
    },
    params: {
        class: 'HOLE',
    },
    body: p => `
    (module "MountingHole_2.2mm_M2_Pad_Via" (version 20210722) (generator pcbnew) (layer "F.Cu")
      (tedit 56DDB9C7)
      ${p.at /* parametric position */} 
    
      (fp_text reference "${p.ref}" (at 0 -3.2) (layer "F.SilkS") ${p.ref_hide} 
        (effects (font (size 1 1) (thickness 0.15)))
        (tstamp b68bb25c-687d-44b1-b966-dad4cac66b35)
      )
    (pad "" np_thru_hole circle (at 0 0) (size 2.1 2.1) (drill 2.1) (layers "*.Cu" "*.Mask")
        (uuid "cc8d125e-270e-46a6-8a5c-2625962e35d8")
    )
    )`
}