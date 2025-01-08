// RP2040 Pro Micro
// Params
//  orientation: default is down
//    if down, power led will face the pcb
//    if up, power led will face away from pcb
// Based off https://github.com/rroels/kicad_pro_micro_rp2040

module.exports = {
    params: {
      designator: 'MCU',
      orientation: 'down',
      interior: false,
      VCC: {type: 'net', value: 'VCC'},
      VCC3V3: {type: 'net', value: '3V3'},
      GND: {type: 'net', value: 'GND'},
      RST: {type: 'net', value: 'RST'},
      BOOT: {type: 'net', value: 'BOOT'},
      P0: {type: 'net', value: 'P0'},
      P1: {type: 'net', value: 'P1'},
      P2: {type: 'net', value: 'P2'},
      P3: {type: 'net', value: 'P3'},
      P4: {type: 'net', value: 'P4'},
      P5: {type: 'net', value: 'P5'},
      P6: {type: 'net', value: 'P6'},
      P7: {type: 'net', value: 'P7'},
      P8: {type: 'net', value: 'P8'},
      P9: {type: 'net', value: 'P9'},
      P10: {type: 'net', value: 'P10'},
      P11: {type: 'net', value: 'P11'},
      P12: {type: 'net', value: 'P12'},
      P13: {type: 'net', value: 'P13'},
      P14: {type: 'net', value: 'P14'},
      P15: {type: 'net', value: 'P15'},
      P16: {type: 'net', value: 'P16'},
      P17: {type: 'net', value: 'P17'},
      P18: {type: 'net', value: 'P18'},

      P20: {type: 'net', value: 'P20'},
      P21: {type: 'net', value: 'P21'},
      P22: {type: 'net', value: 'P22'},
      P23: {type: 'net', value: 'P23'},
      P24: {type: 'net', value: 'P24'},
      P25: {type: 'net', value: 'P25'},
      P26: {type: 'net', value: 'P26'},
      P27: {type: 'net', value: 'P27'},
      P28: {type: 'net', value: 'P28'},
      P29: {type: 'net', value: 'P29'},
    },
    body: p => {
      const standard = `
        (footprint "pro_micro_rp2040" (version 20240108) (generator "pcbnew") (generator_version "8.0")
        ${p.at /* parametric position */}
        (layer "F.Cu")
        (property "Reference" "REF**" (at 0 4 0)(hide yes)
        (layer "F.SilkS")(effects (font (size 1 1) (thickness 0.1))))
        (property "Value" "Pro Micro RP2040" (at 0 -2 0)(hide yes)
        (layer "F.Fab")(effects (font (size 0.8 0.8) (thickness 0.15))))
        (property "Footprint" "" (at -8.89 16.5 0) (layer "F.Fab")(hide yes)(effects (font (size 1.27 1.27) (thickness 0.15))))
        (property "Datasheet" "" (at -8.89 16.5 0) (layer "F.Fab")(hide yes)(effects (font (size 1.27 1.27) (thickness 0.15))))
        (property "Description" "" (at -8.89 16.5 0) (layer "F.Fab")(hide yes)(effects (font (size 1.27 1.27) (thickness 0.15))))

        ${''/* component outline */}
        (fp_line (start -8.9 -16.5) (end -8.9 -13.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start -8.9 -16.5) (end -5.9 -16.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start -8.9 13.5) (end -8.9 16.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start -8.9 16.5) (end -5.9 16.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start -8.89 16.5) (end -8.89 13.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start -5.89 -16.5) (end -8.89 -16.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start 8.9 -16.5) (end 5.9 -16.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start 8.9 -16.5) (end 8.9 -13.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start 8.9 16.5) (end 5.9 16.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_line (start 8.9 16.5) (end 8.9 13.5) (stroke (width 0.1) (type default)) (layer "F.SilkS"))
        (fp_rect (start -4.5 -10.75) (end 4.5 -17.15) (stroke (width 0.1) (type default)) (fill none) (layer "F.SilkS"))
        (fp_rect (start -8.9 16.5) (end 8.9 -16.5) (stroke (width 0.1) (type default)) (fill none) (layer "Dwgs.User"))
        `
      function pins(def_neg, def_pos) {
        return `
          (pad "0" thru_hole circle (at ${def_neg}7.64 -12.7) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P0})
          (pad "1" thru_hole circle (at ${def_neg}7.64 -10.16) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P1})
          (pad "2" thru_hole circle (at ${def_neg}7.64 -2.54) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P2})
          (pad "3" thru_hole circle (at ${def_neg}7.64 0) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P3})
          (pad "3V3" thru_hole circle (at ${def_pos}7.6 -5.08) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.VCC3V3})
          (pad "4" thru_hole circle (at ${def_neg}7.64 2.54) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P4})
          (pad "5" thru_hole circle (at ${def_neg}7.64 5.08) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P5})
          (pad "VCC" thru_hole circle (at ${def_pos}7.6 -12.7) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.VCC})
          (pad "6" thru_hole circle (at ${def_neg}7.64 7.62) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P6})
          (pad "7" thru_hole circle (at ${def_neg}7.64 10.16) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P7})
          (pad "8" thru_hole circle (at ${def_neg}7.64 12.7) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P8})
          (pad "9" thru_hole circle (at ${def_neg}7.64 15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P9})
          (pad "10" thru_hole circle (at ${def_neg}7.59 -15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P10})
          (pad "11" thru_hole circle (at ${def_pos}7.6 -15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P11})
          (pad "12" thru_hole circle (at ${def_neg}5.1 15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P12})
          (pad "13" thru_hole circle (at ${def_neg}2.56 15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P13})
          (pad "14" thru_hole circle (at ${def_neg}0.02 15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P14})
          (pad "15" thru_hole circle (at ${def_pos}2.52 15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P15})
          (pad "16" thru_hole circle (at ${def_pos}5.06 15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P16})
          (pad "20" thru_hole circle (at ${def_pos}7.6 10.16) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P20})
          (pad "21" thru_hole circle (at ${def_pos}7.6 15.24) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P21})
          (pad "22" thru_hole circle (at ${def_pos}7.6 7.62) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P22})
          (pad "23" thru_hole circle (at ${def_pos}7.6 12.7) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P23})
          (pad "26" thru_hole circle (at ${def_pos}7.6 5.08) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P26})
          (pad "27" thru_hole circle (at ${def_pos}7.6 2.54) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P27})
          (pad "28" thru_hole circle (at ${def_pos}7.6 0) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P28})
          (pad "29" thru_hole circle (at ${def_pos}7.6 -2.54) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P29})
          (pad "GND" thru_hole circle (at ${def_neg}7.64 -7.62) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.GND})
          (pad "GND" thru_hole circle (at ${def_neg}7.64 -5.08) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.GND})
          (pad "GND" thru_hole circle (at ${def_pos}7.6 -10.16) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.GND})
          (pad "RST" thru_hole circle (at ${def_pos}7.6 -7.62) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.RST})
        `
      }
      function inside(def_neg, def_pos) {
        return `
          (pad "18" thru_hole circle (at ${def_pos}3.12 0.8) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P18})
          (pad "24" thru_hole circle (at ${def_pos}5.11 0.8) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P24})
          (pad "25" thru_hole circle (at ${def_neg}5.1 12.7) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.P25})
          (pad "BOOT" thru_hole circle (at ${def_neg}4.89 -8.43) (size 1.524 1.524) (drill 0.762) (layers "*.Cu" "*.Mask") ${p.BOOT})
        `
      }
      if(p.orientation == 'up' && p.interior) {
        return `
          ${standard}
          ${pins('-', '')})
          ${inside('-', '')})
          `
      } else if(p.orientation == 'up' && !p.interior) {
        return `
          ${standard}
          ${pins('-', '')})
          `
      } else if (p.interior){
        return `
          ${standard}
          ${pins('', '-')})
          ${inside('', '-')})
          `
      } else {
        return `
          ${standard}
          ${pins('', '-')})
          `
      }
    }
  }